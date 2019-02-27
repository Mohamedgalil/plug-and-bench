#!/bin/sh
# Note: move this script to src-gen

EMF4CPP_PATH="/home/smartsoft/emf4cpp"
MODEL_DIRECTORY="/home/smartsoft/Downloads/git/bm/ecore"

echo $EMF4CPP_PATH

$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.base.basicAttributes/model/basicAttributes.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.service.communicationObject/model/communicationObject.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.service.parameterDefinition/model/parameterDefinition.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.base.stateMachine/model/stateMachine.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.service.communicationPattern/model/communicationPattern.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.service.coordinationPattern/model/coordinationPattern.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.service.serviceDefinition/model/serviceDefinition.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.service.componentMode/model/componentMode.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.component.componentDefinition/model/componentDefinition.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.component.benchmark.standardizedProblem/model/standardized_problem.ecore
$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/org.ecore.component.benchmark.experiment/model/benchmark_experiment.ecore

#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.service.communicationPattern/model/communicationPattern.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.component.componentDocumentation/model/componentDocumentation.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.service.serviceDefinition/model/serviceDefinition.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.component.coordinationExtension/model/coordinationExtension.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.component.performanceExtension/model/performanceExtension.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.system.activityArchitecture/model/activityArchitecture.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.component.benchmark.standardizedProblem/model/standardized_problem.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.system.systemParameter/model/systemParameter.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.base.basicAttributes/model/basicAttributes.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.system.compArchSeronetExtension/model/compArchSeronetExtension.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.service.communicationObject/model/communicationObject.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.component.componentParameter/model/componentParameter.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.system.deployment/model/deployment.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.component.benchmark.experiment/model/benchmark_experiment.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.service.coordinationPattern/model/coordinationPattern.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.service.roboticMiddleware/model/roboticMiddleware.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.system.componentArchitecture/model/componentArchitecture.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.system.causeEffectChain/model/causeEffectChain.ecore
#$EMF4CPP_PATH/builds/emf4cpp-generator-2.0.0/bin/emf4cpp.generator.sh $MODEL_DIRECTORY/model/org.ecore.system.targetPlatform/model/targetPlatform.ecore
