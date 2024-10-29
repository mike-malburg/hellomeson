$outDir = $currentDirectory = "builddir"

Write-Host $outDir
if(Test-Path $outDir) {
   Remove-Item -Recurse -Force $outDir
}
New-Item $outDir -ItemType Directory
meson setup $outDir
meson compile -C $outDir
meson install -C $outDir
