// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_PuzzlePlatformsGameInstance_generated_h
#error "PuzzlePlatformsGameInstance.generated.h already included, missing '#pragma once' in PuzzlePlatformsGameInstance.h"
#endif
#define PUZZLEPLATFORMS_PuzzlePlatformsGameInstance_generated_h

#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_SPARSE_DATA
#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzlePlatformsGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzlePlatformsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPuzzlePlatformsGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPuzzlePlatformsGameInstance*>(this); }


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzlePlatformsGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzlePlatformsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPuzzlePlatformsGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPuzzlePlatformsGameInstance*>(this); }


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzlePlatformsGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzlePlatformsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzlePlatformsGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzlePlatformsGameInstance(UPuzzlePlatformsGameInstance&&); \
	NO_API UPuzzlePlatformsGameInstance(const UPuzzlePlatformsGameInstance&); \
public:


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzlePlatformsGameInstance(UPuzzlePlatformsGameInstance&&); \
	NO_API UPuzzlePlatformsGameInstance(const UPuzzlePlatformsGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzlePlatformsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzlePlatformsGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzlePlatformsGameInstance)


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_PRIVATE_PROPERTY_OFFSET
#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_16_PROLOG
#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_SPARSE_DATA \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_RPC_WRAPPERS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_INCLASS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_SPARSE_DATA \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_INCLASS_NO_PURE_DECLS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPuzzlePlatformsGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
