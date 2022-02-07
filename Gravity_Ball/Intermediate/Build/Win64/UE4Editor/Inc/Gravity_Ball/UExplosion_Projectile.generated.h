// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVITY_BALL_UExplosion_Projectile_generated_h
#error "UExplosion_Projectile.generated.h already included, missing '#pragma once' in UExplosion_Projectile.h"
#endif
#define GRAVITY_BALL_UExplosion_Projectile_generated_h

#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_SPARSE_DATA
#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcastExplToActors); \
	DECLARE_FUNCTION(execsetNewVel);


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcastExplToActors); \
	DECLARE_FUNCTION(execsetNewVel);


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUExplosion_Projectile(); \
	friend struct Z_Construct_UClass_AUExplosion_Projectile_Statics; \
public: \
	DECLARE_CLASS(AUExplosion_Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gravity_Ball"), NO_API) \
	DECLARE_SERIALIZER(AUExplosion_Projectile)


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAUExplosion_Projectile(); \
	friend struct Z_Construct_UClass_AUExplosion_Projectile_Statics; \
public: \
	DECLARE_CLASS(AUExplosion_Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gravity_Ball"), NO_API) \
	DECLARE_SERIALIZER(AUExplosion_Projectile)


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUExplosion_Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUExplosion_Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUExplosion_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUExplosion_Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUExplosion_Projectile(AUExplosion_Projectile&&); \
	NO_API AUExplosion_Projectile(const AUExplosion_Projectile&); \
public:


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUExplosion_Projectile(AUExplosion_Projectile&&); \
	NO_API AUExplosion_Projectile(const AUExplosion_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUExplosion_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUExplosion_Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUExplosion_Projectile)


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ExplLifeSpan() { return STRUCT_OFFSET(AUExplosion_Projectile, m_ExplLifeSpan); } \
	FORCEINLINE static uint32 __PPO__m_valueIncrement() { return STRUCT_OFFSET(AUExplosion_Projectile, m_valueIncrement); } \
	FORCEINLINE static uint32 __PPO__m_projStop() { return STRUCT_OFFSET(AUExplosion_Projectile, m_projStop); } \
	FORCEINLINE static uint32 __PPO__m_projectile_component() { return STRUCT_OFFSET(AUExplosion_Projectile, m_projectile_component); } \
	FORCEINLINE static uint32 __PPO__m_explosion() { return STRUCT_OFFSET(AUExplosion_Projectile, m_explosion); } \
	FORCEINLINE static uint32 __PPO__m_sphereCol() { return STRUCT_OFFSET(AUExplosion_Projectile, m_sphereCol); } \
	FORCEINLINE static uint32 __PPO__m_mesh() { return STRUCT_OFFSET(AUExplosion_Projectile, m_mesh); }


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_17_PROLOG
#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_PRIVATE_PROPERTY_OFFSET \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_SPARSE_DATA \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_RPC_WRAPPERS \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_INCLASS \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_PRIVATE_PROPERTY_OFFSET \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_SPARSE_DATA \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_INCLASS_NO_PURE_DECLS \
	Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVITY_BALL_API UClass* StaticClass<class AUExplosion_Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gravity_Ball_Source_Gravity_Ball_UExplosion_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
