// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_MenuInterface_generated_h
#error "MenuInterface.generated.h already included, missing '#pragma once' in MenuInterface.h"
#endif
#define PUZZLEPLATFORMS_MenuInterface_generated_h

#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_SPARSE_DATA
#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS
#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLEPLATFORMS_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLEPLATFORMS_API, UMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLEPLATFORMS_API UMenuInterface(UMenuInterface&&); \
	PUZZLEPLATFORMS_API UMenuInterface(const UMenuInterface&); \
public:


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLEPLATFORMS_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLEPLATFORMS_API UMenuInterface(UMenuInterface&&); \
	PUZZLEPLATFORMS_API UMenuInterface(const UMenuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLEPLATFORMS_API, UMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface)


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMenuInterface(); \
	friend struct Z_Construct_UClass_UMenuInterface_Statics; \
public: \
	DECLARE_CLASS(UMenuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), PUZZLEPLATFORMS_API) \
	DECLARE_SERIALIZER(UMenuInterface)


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_GENERATED_UINTERFACE_BODY() \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_GENERATED_UINTERFACE_BODY() \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	typedef IMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	typedef IMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_9_PROLOG
#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_SPARSE_DATA \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_SPARSE_DATA \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UMenuInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
