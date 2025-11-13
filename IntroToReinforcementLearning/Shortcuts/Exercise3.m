clear;
clc;
close all;
bdclose all;

proj = currentProject;
cd(strcat(proj.RootFolder,filesep,"Exercise 3 - Testing and Deployment"))
open("Exercise3.mlx")