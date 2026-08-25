#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
namespace MX::Data::Excel { class CharacterExcel; }
class CharacterState;
namespace UnityEngine { class Texture; }

#define UIEVENTBUFFDETAILITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x241C650)
#define UIEVENTBUFFDETAILITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x241C8A0)
#define UIEVENTBUFFDETAILITEM__SETDATA_B__4_0_OFFSET UNITYSDK_OFFSET(0x241C8B0)

	inline static constexpr unsigned int UIEventBuffDetailItem_TypeDefinitionIndex = 5493;

	class UIEventBuffDetailItem : public Il2CppObject
	{
	public:
		UITexture* characterIcon; // 0x18
		::UnityEngine::GameObject* buffOn; // 0x20
		::UnityEngine::GameObject* dim; // 0x28

		::System::Void SetData(::MX::Data::Excel::CharacterExcel* arg, CharacterState* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFDETAILITEM_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFDETAILITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__4_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFDETAILITEM__SETDATA_B__4_0_OFFSET))(arg, nullptr);
		}

	};

