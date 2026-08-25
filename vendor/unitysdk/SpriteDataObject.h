#pragma once
#include "unitysdk.h"

#define SPRITEDATAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA189170)

	inline static constexpr unsigned int SpriteDataObject_TypeDefinitionIndex = 33767;

	class SpriteDataObject : public Il2CppObject
	{
	public:
		Il2CppObject* frames; // 0x10
		Meta* meta; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRITEDATAOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

