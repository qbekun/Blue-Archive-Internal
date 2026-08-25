#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF3B80)
#define UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9DF3BB0)
#define UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9DF3BC0)
#define UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DF3BD0)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetReferenceUILabelRestriction_TypeDefinitionIndex = 36157;

	class AssetReferenceUILabelRestriction : public Flags
	{
	public:
		::Il2CppArray<::System::Object*>* m_AllowedLabels; // 0x10
		::System::String* m_CachedToString; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAsset(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_VALIDATEASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAsset(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_VALIDATEASSET_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETREFERENCEUILABELRESTRICTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

