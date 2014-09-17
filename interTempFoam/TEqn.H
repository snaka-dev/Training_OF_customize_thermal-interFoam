surfaceScalarField kappaf = twoPhaseProperties.kappaf();

fvScalarMatrix TEqn
    (
        fvm::ddt(rhoCp,T)
        + fvm::div(rhoCpPhi,T)
        - fvm::laplacian(kappaf,T)
    );

TEqn.solve();