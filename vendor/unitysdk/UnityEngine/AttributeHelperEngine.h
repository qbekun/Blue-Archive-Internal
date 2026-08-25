#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETPARENTTYPEDISALLOWINGMULTIPLEINCLUSION_OFFSET UNITYSDK_OFFSET(0xA22DF50)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETREQUIREDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA22E030)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETEXECUTEMODE_OFFSET UNITYSDK_OFFSET(0xA22E4D0)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_CHECKISEDITORSCRIPT_OFFSET UNITYSDK_OFFSET(0xA22E5D0)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETDEFAULTEXECUTIONORDERFOR_OFFSET UNITYSDK_OFFSET(0xA22E6B0)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETCUSTOMATTRIBUTEOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA22E740)

namespace UnityEngine
{
	inline static constexpr unsigned int AttributeHelperEngine_TypeDefinitionIndex = 31131;

	class AttributeHelperEngine : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _disallowMultipleComponentArray; // 0x0
		::Il2CppArray<::System::Object*>* _executeInEditModeArray; // 0x8
		::Il2CppArray<::System::Object*>* _requireComponentArray; // 0x10

		::System::Type* GetParentTypeDisallowingMultipleInclusion(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETPARENTTYPEDISALLOWINGMULTIPLEINCLUSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRequiredComponents(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETREQUIREDCOMPONENTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetExecuteMode(::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETEXECUTEMODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CheckIsEditorScript(::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_CHECKISEDITORSCRIPT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDefaultExecutionOrderFor(::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETDEFAULTEXECUTIONORDERFOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributeOfType(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETCUSTOMATTRIBUTEOFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

