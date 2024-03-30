// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Obstacle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SKATEBOARDING_Obstacle_generated_h
#error "Obstacle.generated.h already included, missing '#pragma once' in Obstacle.h"
#endif
#define SKATEBOARDING_Obstacle_generated_h

#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_SPARSE_DATA
#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerDetectorEndOverlapp); \
	DECLARE_FUNCTION(execPlayerDetectorBeginOverlap);


#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_ACCESSORS
#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Skateboarding"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacle(AObstacle&&); \
	NO_API AObstacle(const AObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacle) \
	NO_API virtual ~AObstacle();


#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_11_PROLOG
#define FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_SPARSE_DATA \
	FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_ACCESSORS \
	FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKATEBOARDING_API UClass* StaticClass<class AObstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_Obstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
