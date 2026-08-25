#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color32; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define TMPRO_TMPRO_EXTENSIONMETHODS_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0xA11E980)
#define TMPRO_TMPRO_EXTENSIONMETHODS_ARRAYTOSTRING_OFFSET UNITYSDK_OFFSET(0xA11EA20)
#define TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0xA11EB00)
#define TMPRO_TMPRO_EXTENSIONMETHODS_UINTTOSTRING_OFFSET UNITYSDK_OFFSET(0xA11EB90)
#define TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0xA11EC60)
#define TMPRO_TMPRO_EXTENSIONMETHODS_FINDINSTANCEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET UNITYSDK_OFFSET(0xA11ED50)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET UNITYSDK_OFFSET(0xA11EDB0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET UNITYSDK_OFFSET(0xA11EDF0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET UNITYSDK_OFFSET(0xA11EE30)
#define TMPRO_TMPRO_EXTENSIONMETHODS_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA11EE60)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET UNITYSDK_OFFSET(0xA11EFA0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET UNITYSDK_OFFSET(0xA11F0E0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_MINALPHA_OFFSET UNITYSDK_OFFSET(0xA11F210)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET UNITYSDK_OFFSET(0xA11F240)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET UNITYSDK_OFFSET(0xA11F2C0)

namespace TMPro
{
	inline static constexpr unsigned int TMPro_ExtensionMethods_TypeDefinitionIndex = 33616;

	class TMPro_ExtensionMethods : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ToIntArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TOINTARRAY_OFFSET))(str, nullptr);
		}

		::System::String* ArrayToString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_ARRAYTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* IntToString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* UintToString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_UINTTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* IntToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindInstanceID(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_FINDINSTANCEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Compare(::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color32*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareRGB(::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color32*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Compare(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareRGB(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color32* Multiply(::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::Color32*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color32* Tint(::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::Color32*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color32* Tint(::UnityEngine::Color32* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::Color32*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* MinAlpha(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_MINALPHA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Compare(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Compare(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

