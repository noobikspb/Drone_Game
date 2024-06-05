// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "drone_game/drone_gameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedrone_gameGameMode() {}
// Cross Module References
	DRONE_GAME_API UClass* Z_Construct_UClass_Adrone_gameGameMode();
	DRONE_GAME_API UClass* Z_Construct_UClass_Adrone_gameGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_drone_game();
// End Cross Module References
	void Adrone_gameGameMode::StaticRegisterNativesAdrone_gameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Adrone_gameGameMode);
	UClass* Z_Construct_UClass_Adrone_gameGameMode_NoRegister()
	{
		return Adrone_gameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Adrone_gameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Adrone_gameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_drone_game,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adrone_gameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "drone_gameGameMode.h" },
		{ "ModuleRelativePath", "drone_gameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Adrone_gameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Adrone_gameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Adrone_gameGameMode_Statics::ClassParams = {
		&Adrone_gameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Adrone_gameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Adrone_gameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Adrone_gameGameMode()
	{
		if (!Z_Registration_Info_UClass_Adrone_gameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Adrone_gameGameMode.OuterSingleton, Z_Construct_UClass_Adrone_gameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Adrone_gameGameMode.OuterSingleton;
	}
	template<> DRONE_GAME_API UClass* StaticClass<Adrone_gameGameMode>()
	{
		return Adrone_gameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Adrone_gameGameMode);
	Adrone_gameGameMode::~Adrone_gameGameMode() {}
	struct Z_CompiledInDeferFile_FID_test_UE_drone_game_Source_drone_game_drone_gameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_UE_drone_game_Source_drone_game_drone_gameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Adrone_gameGameMode, Adrone_gameGameMode::StaticClass, TEXT("Adrone_gameGameMode"), &Z_Registration_Info_UClass_Adrone_gameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Adrone_gameGameMode), 1041265917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_UE_drone_game_Source_drone_game_drone_gameGameMode_h_772476489(TEXT("/Script/drone_game"),
		Z_CompiledInDeferFile_FID_test_UE_drone_game_Source_drone_game_drone_gameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_UE_drone_game_Source_drone_game_drone_gameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
