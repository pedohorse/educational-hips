hou version: 18.0.391

## Radial Basis Function interpolation based deformation, asset example with explanations.

Radial Basis Function (rbf) deformations are actually very simple. For a low resolution reference mesh they are also very fast for deforming even high resolution geometry.

Capturing an animated deformations for the reference grid, however, might be a pain.

Overall it has some use cases, like shaping cached RBD, smokes or particle simulations, but by no way is it a replacement for something like wraps and other good old reference frame based deformers.

![a1](previews/montage_s.gif)
![a2](previews/squab_s.gif)

The asset is heavily filled with comments on how it all works, while itself being done as a proper production level asset. Might be a good learning material for junior TDs.


support the effort: [patreon](https://www.patreon.com/posts/40995469)
