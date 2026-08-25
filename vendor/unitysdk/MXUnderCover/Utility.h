#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Color; }

#define MXUNDERCOVER_UTILITY_SETFLOATIFEXISTS_OFFSET UNITYSDK_OFFSET(0xDD1040)
#define MXUNDERCOVER_UTILITY_SETCOLORIFEXISTS_OFFSET UNITYSDK_OFFSET(0xDD10A0)
#define MXUNDERCOVER_UTILITY_GETCOLORORDEFAULT_OFFSET UNITYSDK_OFFSET(0xDD10F0)
#define MXUNDERCOVER_UTILITY_TOADDRESSABLEKEY_OFFSET UNITYSDK_OFFSET(0xDD1190)

namespace MXUnderCover
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 10062;

	class Utility : public Il2CppObject
	{
	public:
		::System::Void SetFloatIfExists(::UnityEngine::Material* arg, ::System::Int32 arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UTILITY_SETFLOATIFEXISTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetColorIfExists(::UnityEngine::Material* arg, ::System::Int32 arg2, ::UnityEngine::Color* arg3)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UTILITY_SETCOLORIFEXISTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetColorOrDefault(::UnityEngine::Material* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UTILITY_GETCOLORORDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToAddressableKey(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UTILITY_TOADDRESSABLEKEY_OFFSET))(str, nullptr);
		}

	};
}

