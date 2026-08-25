#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_TRYGETBYFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_TRYGETBYSECOND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int BidirectionalDictionary`2_TypeDefinitionIndex = 31810;

	class BidirectionalDictionary`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _firstToSecond; // 0x0
		Il2CppObject* _secondToFirst; // 0x0
		::System::String* _duplicateFirstErrorMessage; // 0x0
		::System::String* _duplicateSecondErrorMessage; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_.CTOR_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void Set(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetByFirst(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_TRYGETBYFIRST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetBySecond(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BIDIRECTIONALDICTIONARY`2_TRYGETBYSECOND_OFFSET))(arg, arg, nullptr);
		}

	};
}

