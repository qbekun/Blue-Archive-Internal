#pragma once
#include "unitysdk.h"

class MXButton;
class FormationModel;
namespace MX::GameLogic::DBModel { class ClearDeckKey; }
class From;

#define CLEARDECKBUTTON_ONCLICKCLEARDECK_OFFSET UNITYSDK_OFFSET(0x24DAEF0)
#define CLEARDECKBUTTON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24DAF80)
#define CLEARDECKBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DB6C0)
#define CLEARDECKBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x24DB6D0)
#define CLEARDECKBUTTON_GETCLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0x24DB000)

	inline static constexpr unsigned int ClearDeckButton_TypeDefinitionIndex = 5981;

	class ClearDeckButton : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x18
		FormationModel* formationModel; // 0x20
		::MX::GameLogic::DBModel::ClearDeckKey* clearDeckKey; // 0x28

		::System::Void OnClickClearDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKBUTTON_ONCLICKCLEARDECK_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKBUTTON_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* GetClearDeckKey(From* arg)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(From*, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKBUTTON_GETCLEARDECKKEY_OFFSET))(arg, nullptr);
		}

	};

