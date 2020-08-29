hou version: 18.0.391

## Radial Basis Function interpolation based deformation, asset example with explanations.

Radial Basis Function (rbf) deformations are actually very simple. For a low resolution reference mesh they are also very fast for deforming even high resolution geometry.

Capturing an animated deformations for the reference grid, however, might be a pain.

Overall it has some use cases, like shaping cached RBD, smokes or particle simulations, but by no way is it a replacement for something like wraps and other good old reference frame based deformers.

![a1](previews/montage_s.gif)
![a2](previews/squab_s.gif)

The asset is heavily filled with comments on how it all works, while itself being done as a proper production level asset. Might be a good learning material for junior TDs.

math background for this is very small and simple as soon as you familiarise yourself with mathematical notation. It all fits into one first page of this article: [main pdf article](https://hal.archives-ouvertes.fr/hal-02102304/document)

additional basis functions taken from here: [another pdf article](https://pdfs.semanticscholar.org/4ef7/d2d515169b0919a080f84f2b82786b978e45.pdf)


support the effort: [patreon](https://www.patreon.com/posts/40995469)
