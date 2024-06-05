// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinHP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DRONE_GAME_CoinHP_generated_h
#error "CoinHP.generated.h already included, missing '#pragma once' in CoinHP.h"
#endif
#define DRONE_GAME_CoinHP_generated_h

#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_SPARSE_DATA
#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_ACCESSORS
#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinHP(); \
	friend struct Z_Construct_UClass_ACoinHP_Statics; \
public: \
	DECLARE_CLASS(ACoinHP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/drone_game"), NO_API) \
	DECLARE_SERIALIZER(ACoinHP)


#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACoinHP(); \
	friend struct Z_Construct_UClass_ACoinHP_Statics; \
public: \
	DECLARE_CLASS(ACoinHP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/drone_game"), NO_API) \
	DECLARE_SERIALIZER(ACoinHP)


#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinHP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinHP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinHP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinHP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoinHP(ACoinHP&&); \
	NO_API ACoinHP(const ACoinHP&); \
public: \
	NO_API virtual ~ACoinHP();


#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoinHP(ACoinHP&&); \
	NO_API ACoinHP(const ACoinHP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinHP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinHP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoinHP) \
	NO_API virtual ~ACoinHP();


#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_7_PROLOG
#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_SPARSE_DATA \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_RPC_WRAPPERS \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_ACCESSORS \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_INCLASS \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_SPARSE_DATA \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_ACCESSORS \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_INCLASS_NO_PURE_DECLS \
	FID_test_UE_drone_game_Source_drone_game_CoinHP_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONE_GAME_API UClass* StaticClass<class ACoinHP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_UE_drone_game_Source_drone_game_CoinHP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
