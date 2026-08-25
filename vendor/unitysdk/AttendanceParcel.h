#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UISmallParcelCard;

#define ATTENDANCEPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD1CF0)

	inline static constexpr unsigned int AttendanceParcel_TypeDefinitionIndex = 8667;

	class AttendanceParcel : public Il2CppObject
	{
	public:
		UILabel* systemLabel; // 0x18
		::UnityEngine::GameObject* historyObject; // 0x20
		UISmallParcelCard* parcelCard; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEPARCEL_.CTOR_OFFSET))(nullptr);
		}

	};

