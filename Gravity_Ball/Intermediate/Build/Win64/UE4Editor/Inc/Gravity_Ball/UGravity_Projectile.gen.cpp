// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gravity_Ball/UGravity_Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGravity_Projectile() {}
// Cross Module References
	GRAVITY_BALL_API UClass* Z_Construct_UClass_AUGravity_Projectile_NoRegister();
	GRAVITY_BALL_API UClass* Z_Construct_UClass_AUGravity_Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Gravity_Ball();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUGravity_Projectile::execcastAttractionToObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->castAttractionToObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUGravity_Projectile::execstopBullet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->stopBullet();
		P_NATIVE_END;
	}
	void AUGravity_Projectile::StaticRegisterNativesAUGravity_Projectile()
	{
		UClass* Class = AUGravity_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "castAttractionToObjects", &AUGravity_Projectile::execcastAttractionToObjects },
			{ "stopBullet", &AUGravity_Projectile::execstopBullet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUGravity_Projectile, nullptr, "castAttractionToObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUGravity_Projectile_stopBullet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUGravity_Projectile_stopBullet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGravity_Projectile_stopBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUGravity_Projectile, nullptr, "stopBullet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUGravity_Projectile_stopBullet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGravity_Projectile_stopBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUGravity_Projectile_stopBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUGravity_Projectile_stopBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUGravity_Projectile_NoRegister()
	{
		return AUGravity_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AUGravity_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_projectileStop_MetaData[];
#endif
		static void NewProp_m_projectileStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_projectileStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_actorAttraction_MetaData[];
#endif
		static void NewProp_m_actorAttraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_actorAttraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_projectile_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_projectile_component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sphereCol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_sphereCol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attractionParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_attractionParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUGravity_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Gravity_Ball,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUGravity_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUGravity_Projectile_castAttractionToObjects, "castAttractionToObjects" }, // 61886583
		{ &Z_Construct_UFunction_AUGravity_Projectile_stopBullet, "stopBullet" }, // 3166349448
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGravity_Projectile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGravity_Projectile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectileStop_MetaData[] = {
		{ "Category", "UGravity_Projectile" },
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectileStop_SetBit(void* Obj)
	{
		((AUGravity_Projectile*)Obj)->m_projectileStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectileStop = { "m_projectileStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUGravity_Projectile), &Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectileStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectileStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectileStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_actorAttraction_MetaData[] = {
		{ "Category", "UGravity_Projectile" },
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_actorAttraction_SetBit(void* Obj)
	{
		((AUGravity_Projectile*)Obj)->m_actorAttraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_actorAttraction = { "m_actorAttraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUGravity_Projectile), &Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_actorAttraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_actorAttraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_actorAttraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectile_component_MetaData[] = {
		{ "Category", "UGravity_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectile_component = { "m_projectile_component", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUGravity_Projectile, m_projectile_component), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectile_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectile_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_sphereCol_MetaData[] = {
		{ "Category", "UGravity_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_sphereCol = { "m_sphereCol", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUGravity_Projectile, m_sphereCol), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_sphereCol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_sphereCol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "UGravity_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUGravity_Projectile, m_mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_attractionParticle_MetaData[] = {
		{ "Category", "UGravity_Projectile" },
		{ "ModuleRelativePath", "UGravity_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_attractionParticle = { "m_attractionParticle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUGravity_Projectile, m_attractionParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_attractionParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_attractionParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUGravity_Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectileStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_actorAttraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_projectile_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_sphereCol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGravity_Projectile_Statics::NewProp_m_attractionParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUGravity_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUGravity_Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUGravity_Projectile_Statics::ClassParams = {
		&AUGravity_Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUGravity_Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUGravity_Projectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUGravity_Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUGravity_Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUGravity_Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUGravity_Projectile, 320963070);
	template<> GRAVITY_BALL_API UClass* StaticClass<AUGravity_Projectile>()
	{
		return AUGravity_Projectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUGravity_Projectile(Z_Construct_UClass_AUGravity_Projectile, &AUGravity_Projectile::StaticClass, TEXT("/Script/Gravity_Ball"), TEXT("AUGravity_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUGravity_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
