#pragma once
#include "../unitysdk.h"

class Type;

#define MXUNDERCOVER_PLAYERINPUTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAC770)
#define MXUNDERCOVER_PLAYERINPUTASSET_SET_OFFSET UNITYSDK_OFFSET(0xDAC7F0)
#define MXUNDERCOVER_PLAYERINPUTASSET_GET_OFFSET UNITYSDK_OFFSET(0xDAC850)
#define MXUNDERCOVER_PLAYERINPUTASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0xDAC890)

namespace MXUnderCover
{
	inline static constexpr unsigned int PlayerInputAsset_TypeDefinitionIndex = 9904;

	class PlayerInputAsset : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_PLAYERINPUTASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(Type* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_PLAYERINPUTASSET_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* Get(Type* arg)
		{
			return ((::System::Object*(*)(Type*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_PLAYERINPUTASSET_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_PLAYERINPUTASSET_CLEAR_OFFSET))(nullptr);
		}

	};
}

