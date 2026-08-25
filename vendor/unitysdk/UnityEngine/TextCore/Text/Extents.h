#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_TEXTCORE_TEXT_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2D4E80)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int Extents_TypeDefinitionIndex = 35570;

	class Extents : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* min; // 0x10
		::UnityEngine::Vector2* max; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_EXTENTS_TOSTRING_OFFSET))(nullptr);
		}

	};
}

