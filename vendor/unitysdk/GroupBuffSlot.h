#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }
namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;

#define GROUPBUFFSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x254AC20)

	inline static constexpr unsigned int GroupBuffSlot_TypeDefinitionIndex = 6074;

	class GroupBuffSlot : public Il2CppObject
	{
	public:
		::FlatData::School* School; // 0x10
		::UnityEngine::GameObject* Root; // 0x18
		::UnityEngine::GameObject* On; // 0x20
		::UnityEngine::GameObject* Off; // 0x28
		UITexture* OnTexture; // 0x30
		UITexture* OffTexture; // 0x38
		UILabel* OnLabel; // 0x40
		UILabel* OffLabel; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

