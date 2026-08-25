#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class StylePropertyName; }

#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_GET_ID_OFFSET UNITYSDK_OFFSET(0xA37C220)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA37C230)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_STYLEPROPERTYIDFROMSTRING_OFFSET UNITYSDK_OFFSET(0xA37C240)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37C300)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37C3C0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA37C4C0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA37C4D0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA37C4E0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA37C510)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA37C520)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA37C590)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA37C5A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StylePropertyName_TypeDefinitionIndex = 30208;

	class StylePropertyName : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::StylePropertyId* _id_k__BackingField; // 0x10
		::System::String* _name_k__BackingField; // 0x18

		::UnityEngine::UIElements::StyleSheets::StylePropertyId* get_id()
		{
			return (return (::UnityEngine::UIElements::StyleSheets::StylePropertyId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::StylePropertyId* StylePropertyIdFromString(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::StylePropertyId*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_STYLEPROPERTYIDFROMSTRING_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StylePropertyName* arg, ::UnityEngine::UIElements::StylePropertyName* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StylePropertyName*, ::UnityEngine::UIElements::StylePropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::StylePropertyName* arg, ::UnityEngine::UIElements::StylePropertyName* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StylePropertyName*, ::UnityEngine::UIElements::StylePropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StylePropertyName* op_Implicit(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::StylePropertyName*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StylePropertyName* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StylePropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYNAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

