#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class FSharpUtils; }

#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_.CTOR_OFFSET UNITYSDK_OFFSET(0x94AA4C0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x94AAD00)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_FSHARPCOREASSEMBLY_OFFSET UNITYSDK_OFFSET(0x94AAD50)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_FSHARPCOREASSEMBLY_OFFSET UNITYSDK_OFFSET(0x94AAD60)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_ISUNION_OFFSET UNITYSDK_OFFSET(0x94AAD70)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_ISUNION_OFFSET UNITYSDK_OFFSET(0x94AAD80)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASES_OFFSET UNITYSDK_OFFSET(0x94AAD90)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASES_OFFSET UNITYSDK_OFFSET(0x94AADA0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_PRECOMPUTEUNIONTAGREADER_OFFSET UNITYSDK_OFFSET(0x94AADB0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_PRECOMPUTEUNIONTAGREADER_OFFSET UNITYSDK_OFFSET(0x94AADC0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_PRECOMPUTEUNIONREADER_OFFSET UNITYSDK_OFFSET(0x94AADD0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_PRECOMPUTEUNIONREADER_OFFSET UNITYSDK_OFFSET(0x94AADE0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_PRECOMPUTEUNIONCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x94AADF0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_PRECOMPUTEUNIONCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x94AAE00)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFODECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x94AAE10)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFODECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x94AAE20)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFONAME_OFFSET UNITYSDK_OFFSET(0x94AAE30)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFONAME_OFFSET UNITYSDK_OFFSET(0x94AAE40)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFOTAG_OFFSET UNITYSDK_OFFSET(0x94AAE50)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFOTAG_OFFSET UNITYSDK_OFFSET(0x94AAE60)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFOFIELDS_OFFSET UNITYSDK_OFFSET(0x94AAE70)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFOFIELDS_OFFSET UNITYSDK_OFFSET(0x94AAE80)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x94AAE90)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GETMETHODWITHNONPUBLICFALLBACK_OFFSET UNITYSDK_OFFSET(0x94AAA60)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_CREATEFSHARPFUNCCALL_OFFSET UNITYSDK_OFFSET(0x94AAAD0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_CREATESEQ_OFFSET UNITYSDK_OFFSET(0x94AB0B0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_CREATEMAP_OFFSET UNITYSDK_OFFSET(0x94AB1C0)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_BUILDMAPCREATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94AB390)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int FSharpUtils_TypeDefinitionIndex = 31859;

	class FSharpUtils : public Il2CppObject
	{
	public:
		::System::Object* Lock; // 0x0
		::Newtonsoft::Json::Utilities::FSharpUtils* _instance; // 0x8
		::System::Reflection::MethodInfo* _ofSeq; // 0x10
		::System::Type* _mapType; // 0x18
		::System::Reflection::Assembly* _FSharpCoreAssembly_k__BackingField; // 0x20
		Il2CppObject* _IsUnion_k__BackingField; // 0x28
		Il2CppObject* _GetUnionCases_k__BackingField; // 0x30
		Il2CppObject* _PreComputeUnionTagReader_k__BackingField; // 0x38
		Il2CppObject* _PreComputeUnionReader_k__BackingField; // 0x40
		Il2CppObject* _PreComputeUnionConstructor_k__BackingField; // 0x48
		Il2CppObject* _GetUnionCaseInfoDeclaringType_k__BackingField; // 0x50
		Il2CppObject* _GetUnionCaseInfoName_k__BackingField; // 0x58
		Il2CppObject* _GetUnionCaseInfoTag_k__BackingField; // 0x60
		Il2CppObject* _GetUnionCaseInfoFields_k__BackingField; // 0x68
		::System::String* FSharpSetTypeName; // 0x0
		::System::String* FSharpListTypeName; // 0x0
		::System::String* FSharpMapTypeName; // 0x0

		::System::Void .ctor(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::FSharpUtils* get_Instance()
		{
			return (return (::Newtonsoft::Json::Utilities::FSharpUtils*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* get_FSharpCoreAssembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_FSHARPCOREASSEMBLY_OFFSET))(nullptr);
		}

		::System::Void set_FSharpCoreAssembly(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_FSHARPCOREASSEMBLY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IsUnion()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_ISUNION_OFFSET))(nullptr);
		}

		::System::Void set_IsUnion(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_ISUNION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GetUnionCases()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASES_OFFSET))(nullptr);
		}

		::System::Void set_GetUnionCases(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PreComputeUnionTagReader()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_PRECOMPUTEUNIONTAGREADER_OFFSET))(nullptr);
		}

		::System::Void set_PreComputeUnionTagReader(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_PRECOMPUTEUNIONTAGREADER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PreComputeUnionReader()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_PRECOMPUTEUNIONREADER_OFFSET))(nullptr);
		}

		::System::Void set_PreComputeUnionReader(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_PRECOMPUTEUNIONREADER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PreComputeUnionConstructor()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_PRECOMPUTEUNIONCONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void set_PreComputeUnionConstructor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_PRECOMPUTEUNIONCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GetUnionCaseInfoDeclaringType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFODECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_GetUnionCaseInfoDeclaringType(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFODECLARINGTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GetUnionCaseInfoName()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFONAME_OFFSET))(nullptr);
		}

		::System::Void set_GetUnionCaseInfoName(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFONAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GetUnionCaseInfoTag()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFOTAG_OFFSET))(nullptr);
		}

		::System::Void set_GetUnionCaseInfoTag(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFOTAG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GetUnionCaseInfoFields()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GET_GETUNIONCASEINFOFIELDS_OFFSET))(nullptr);
		}

		::System::Void set_GetUnionCaseInfoFields(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_SET_GETUNIONCASEINFOFIELDS_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureInitialized(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_ENSUREINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodWithNonPublicFallback(::System::Type* arg, ::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_GETMETHODWITHNONPUBLICFALLBACK_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* CreateFSharpFuncCall(::System::Type* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_CREATEFSHARPFUNCCALL_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* CreateSeq(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_CREATESEQ_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateMap(::System::Type* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_CREATEMAP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* BuildMapCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_BUILDMAPCREATOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

