// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gravity_Ball/UExplosion_Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUExplosion_Projectile() {}
// Cross Module References
	GRAVITY_BALL_API UClass* Z_Construct_UClass_AUExplosion_Projectile_NoRegister();
	GRAVITY_BALL_API UClass* Z_Construct_UClass_AUExplosion_Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Gravity_Ball();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUExplosion_Projectile::execcastExplToActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->castExplToActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUExplosion_Projectile::execsetNewVel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setNewVel();
		P_NATIVE_END;
	}
	void AUExplosion_Projectile::StaticRegisterNativesAUExplosion_Projectile()
	{
		UClass* Class = AUExplosion_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "castExplToActors", &AUExplosion_Projectile::execcastExplToActors },
			{ "setNewVel", &AUExplosion_Projectile::execsetNewVel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUExplosion_Projectile, nullptr, "castExplToActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUExplosion_Projectile_setNewVel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUExplosion_Projectile_setNewVel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUExplosion_Projectile_setNewVel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUExplosion_Projectile, nullptr, "setNewVel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUExplosion_Projectile_setNewVel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUExplosion_Projectile_setNewVel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUExplosion_Projectile_setNewVel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUExplosion_Projectile_setNewVel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUExplosion_Projectile_NoRegister()
	{
		return AUExplosion_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AUExplosion_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ExplLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_ExplLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_valueIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_valueIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_projStop_MetaData[];
#endif
		static void NewProp_m_projStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_projStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_projectile_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_projectile_component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_explosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sphereCol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_sphereCol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUExplosion_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Gravity_Ball,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUExplosion_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUExplosion_Projectile_castExplToActors, "castExplToActors" }, // 3284425398
		{ &Z_Construct_UFunction_AUExplosion_Projectile_setNewVel, "setNewVel" }, // 1661071633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UExplosion_Projectile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_ExplLifeSpan_MetaData[] = {
		{ "Category", "UExplosion_Projectile" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_ExplLifeSpan = { "m_ExplLifeSpan", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUExplosion_Projectile, m_ExplLifeSpan), METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_ExplLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_ExplLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_valueIncrement_MetaData[] = {
		{ "Category", "UExplosion_Projectile" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_valueIncrement = { "m_valueIncrement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUExplosion_Projectile, m_valueIncrement), METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_valueIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_valueIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projStop_MetaData[] = {
		{ "Category", "UExplosion_Projectile" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projStop_SetBit(void* Obj)
	{
		((AUExplosion_Projectile*)Obj)->m_projStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projStop = { "m_projStop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUExplosion_Projectile), &Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projectile_component_MetaData[] = {
		{ "Category", "UExplosion_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projectile_component = { "m_projectile_component", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUExplosion_Projectile, m_projectile_component), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projectile_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projectile_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_explosion_MetaData[] = {
		{ "Category", "UExplosion_Projectile" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_explosion = { "m_explosion", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUExplosion_Projectile, m_explosion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_explosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_explosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_sphereCol_MetaData[] = {
		{ "Category", "UExplosion_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_sphereCol = { "m_sphereCol", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUExplosion_Projectile, m_sphereCol), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_sphereCol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_sphereCol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "UExplosion_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UExplosion_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUExplosion_Projectile, m_mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUExplosion_Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_ExplLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_valueIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_projectile_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_explosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_sphereCol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUExplosion_Projectile_Statics::NewProp_m_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUExplosion_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUExplosion_Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUExplosion_Projectile_Statics::ClassParams = {
		&AUExplosion_Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUExplosion_Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUExplosion_Projectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUExplosion_Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUExplosion_Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUExplosion_Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUExplosion_Projectile, 1205628392);
	template<> GRAVITY_BALL_API UClass* StaticClass<AUExplosion_Projectile>()
	{
		return AUExplosion_Projectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUExplosion_Projectile(Z_Construct_UClass_AUExplosion_Projectile, &AUExplosion_Projectile::StaticClass, TEXT("/Script/Gravity_Ball"), TEXT("AUExplosion_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUExplosion_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
