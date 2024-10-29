$buildDir = "builddir"

Write-Host $buildDir
if(Test-Path $buildDir) {
   Write-Host "Removing: $buildDir..."
   Remove-Item -Recurse -Force $buildDir
}
New-Item $buildDir -ItemType Directory
meson setup $buildDir
Push-Location $buildDir
meson compile
meson test --verbose
meson install
Pop-Location

