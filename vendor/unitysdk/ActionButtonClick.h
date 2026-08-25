#pragma once
#include "unitysdk.h"

class UISprite;
namespace MXUnderCover { class UCCondition; }
class IBase;

#define ACTIONBUTTONCLICK_.CTOR_OFFSET UNITYSDK_OFFSET(0xD95930)

	inline static constexpr unsigned int ActionButtonClick_TypeDefinitionIndex = 9740;

	class ActionButtonClick : public Il2CppObject
	{
	public:
		UISprite* ButtonImage; // 0x10
		::MXUnderCover::UCCondition* OnClickCondition; // 0x18
		IBase* OnFailAction; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONBUTTONCLICK_.CTOR_OFFSET))(nullptr);
		}

	};

