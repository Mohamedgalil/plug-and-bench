README.md

# The Benchmark Engineering Tool

The Benchmark Engineering tool aims to aid benchmark developers to structure and standardize benchmarking experiments. This project is funded by RobMoSys.

## How to run the tool

The tool is currently made for developers to be extensible.

### Requirements

 Eclipse Modelling Tool or SmartMDSD are required . 

### Steps

1. Using Eclipse Modelling tools / SmartMDSD, import `BechmarkEngineeringToolv1.zip` as a project

```
File > Import > General > Existing Projects into Workspace > select archive  > select "BechmarkEngineeringToolv1.zip"
```

1. Right click on `org.ecore.component.benchmark.standardizedProblem` > Run as .. > Eclipse Application
   Then, another instance of eclipse will open
2. In the new instance, create a new project

```
File > New > General > Project
```

3. Inside the created project (in step 2), create new instance of Benchmark Experiment:

```
File > New > Other > Benchmark Engineering Tool > Benchmark Experiment
```

4. Inside the created project (in step 2), create a new instance of Standardized Problem:

```
File > New > Other > Benchmark Engineering Tool > Standardized Problem > Standardized Problem
```

5. Open the created Benchmark Experiment and right click, load Resource, then load the created standardized problem
6. Benchmark Experiment, open the properties view, and set the standardized problem to the loaded one.

Note: make sure you show properties view  to read the properties of the entities of the model.

```
Window > show view > Other > properties view
```

### Versions:

v1: added BenchmarkConstraints

v0: first upload of the benchmark engineering tool

