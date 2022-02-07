// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gravity_Ball/UFloatingBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFloatingBullet() {}
// Cross Module References
	GRAVITY_BALL_API UClass* Z_Construct_UClass_AUFloatingBullet_NoRegister();
	GRAVITY_BALL_API UClass* Z_Construct_UClass_AUFloatingBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Gravity_Ball();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUFloatingBullet::execsetZeroVel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setZeroVel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUFloatingBullet::execzeroGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->zeroGravity();
		P_NATIVE_END;
	}
	void AUFloatingBullet::StaticRegisterNativesAUFloatingBullet()
	{
		UClass* Class = AUFloatingBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setZeroVel", &AUFloatingBullet::execsetZeroVel },
			{ "zeroGravity", &AUFloatingBullet::execzeroGravity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUFloatingBullet_setZeroVel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUFloatingBullet_setZeroVel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUFloatingBullet_setZeroVel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUFloatingBullet, nullptr, "setZeroVel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUFloatingBullet_setZeroVel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUFloatingBullet_setZeroVel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUFloatingBullet_setZeroVel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUFloatingBullet_setZeroVel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUFloatingBullet_zeroGravity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUFloatingBullet_zeroGravity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUFloatingBullet_zeroGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUFloatingBullet, nullptr, "zeroGravity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUFloatingBullet_zeroGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUFloatingBullet_zeroGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUFloatingBullet_zeroGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUFloatingBullet_zeroGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUFloatingBullet_NoRegister()
	{
		return AUFloatingBullet::StaticClass();
	}
	struct Z_Construct_UClass_AUFloatingBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_projStop_MetaData[];
#endif
		static void NewProp_m_projStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_projStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_gravityBack_MetaData[];
#endif
		static void NewProp_m_gravityBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_gravityBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GravBackCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_GravBackCounter;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUFloatingBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Gravity_Ball,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUFloatingBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUFloatingBullet_setZeroVel, "setZeroVel" }, // 4125597605
		{ &Z_Construct_UFunction_AUFloatingBullet_zeroGravity, "zeroGravity" }, // 3948136267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFloatingBullet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UFloatingBullet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projStop_MetaData[] = {
		{ "Category", "UFloatingBullet" },
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	void Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projStop_SetBit(void* Obj)
	{
		((AUFloatingBullet*)Obj)->m_projStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projStop = { "m_projStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUFloatingBullet), &Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_gravityBack_MetaData[] = {
		{ "Category", "UFloatingBullet" },
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	void Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_gravityBack_SetBit(void* Obj)
	{
		((AUFloatingBullet*)Obj)->m_gravityBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_gravityBack = { "m_gravityBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUFloatingBullet), &Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_gravityBack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_gravityBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_gravityBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_GravBackCounter_MetaData[] = {
		{ "Category", "UFloatingBullet" },
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_GravBackCounter = { "m_GravBackCounter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUFloatingBullet, m_GravBackCounter), METADATA_PARAMS(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_GravBackCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_GravBackCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projectile_component_MetaData[] = {
		{ "Category", "UFloatingBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projectile_component = { "m_projectile_component", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUFloatingBullet, m_projectile_component), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projectile_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projectile_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_sphereCol_MetaData[] = {
		{ "Category", "UFloatingBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_sphereCol = { "m_sphereCol", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUFloatingBullet, m_sphereCol), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_sphereCol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_sphereCol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "UFloatingBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UFloatingBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUFloatingBullet, m_mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUFloatingBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_gravityBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_GravBackCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_projectile_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_sphereCol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUFloatingBullet_Statics::NewProp_m_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUFloatingBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUFloatingBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUFloatingBullet_Statics::ClassParams = {
		&AUFloatingBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUFloatingBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUFloatingBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUFloatingBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUFloatingBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUFloatingBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUFloatingBullet, 1407307279);
	template<> GRAVITY_BALL_API UClass* StaticClass<AUFloatingBullet>()
	{
		return AUFloatingBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUFloatingBullet(Z_Construct_UClass_AUFloatingBullet, &AUFloatingBullet::StaticClass, TEXT("/Script/Gravity_Ball"), TEXT("AUFloatingBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUFloatingBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
