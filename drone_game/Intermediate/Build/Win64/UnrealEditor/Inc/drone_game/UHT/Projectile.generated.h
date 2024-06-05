// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DRONE_GAME_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define DRONE_GAME_Projectile_generated_h

#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_SPARSE_DATA
#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_ACCESSORS
#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/drone_game"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/drone_game"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	NO_API virtual ~AProjectile();


#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile) \
	NO_API virtual ~AProjectile();


#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_7_PROLOG
#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_SPARSE_DATA \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_RPC_WRAPPERS \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_ACCESSORS \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_INCLASS \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_SPARSE_DATA \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_ACCESSORS \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_INCLASS_NO_PURE_DECLS \
	FID_test_UE_drone_game_Source_drone_game_Projectile_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONE_GAME_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_UE_drone_game_Source_drone_game_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
