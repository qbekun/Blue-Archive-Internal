#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA2D8460)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D9680)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int SpriteCharacter_TypeDefinitionIndex = 35580;

	class SpriteCharacter : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x30
		::System::Int32 m_HashCode; // 0x38

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

