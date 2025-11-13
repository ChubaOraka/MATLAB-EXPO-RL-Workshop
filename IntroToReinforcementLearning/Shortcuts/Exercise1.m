clear;
clc;
close all;
bdclose all;

proj = currentProject;
cd(strcat(proj.RootFolder,filesep,"Exercise 1 - Environment and Reward"))
open("Exercise1.mlx")