// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPlayground/RotatingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALPLAYGROUND_API UClass* Z_Construct_UClass_ARotatingActor();
	UNREALPLAYGROUND_API UClass* Z_Construct_UClass_ARotatingActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealPlayground();
// End Cross Module References
	void ARotatingActor::StaticRegisterNativesARotatingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingActor);
	UClass* Z_Construct_UClass_ARotatingActor_NoRegister()
	{
		return ARotatingActor::StaticClass();
	}
	struct Z_Construct_UClass_ARotatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPlayground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingActor.h" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "RotatingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_MeshComp_MetaData), Z_Construct_UClass_ARotatingActor_Statics::NewProp_MeshComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingActor_Statics::ClassParams = {
		&ARotatingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotatingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARotatingActor()
	{
		if (!Z_Registration_Info_UClass_ARotatingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingActor.OuterSingleton, Z_Construct_UClass_ARotatingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARotatingActor.OuterSingleton;
	}
	template<> UNREALPLAYGROUND_API UClass* StaticClass<ARotatingActor>()
	{
		return ARotatingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingActor);
	ARotatingActor::~ARotatingActor() {}
	struct Z_CompiledInDeferFile_FID_Documents_Repositories_unreal_playground_Source_UnrealPlayground_RotatingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Repositories_unreal_playground_Source_UnrealPlayground_RotatingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingActor, ARotatingActor::StaticClass, TEXT("ARotatingActor"), &Z_Registration_Info_UClass_ARotatingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingActor), 3638502230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Repositories_unreal_playground_Source_UnrealPlayground_RotatingActor_h_1236983077(TEXT("/Script/UnrealPlayground"),
		Z_CompiledInDeferFile_FID_Documents_Repositories_unreal_playground_Source_UnrealPlayground_RotatingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Repositories_unreal_playground_Source_UnrealPlayground_RotatingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
