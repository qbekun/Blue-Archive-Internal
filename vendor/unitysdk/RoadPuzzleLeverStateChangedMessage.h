#pragma once
#include "unitysdk.h"

#define ROADPUZZLELEVERSTATECHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C92C0)

	inline static constexpr unsigned int RoadPuzzleLeverStateChangedMessage_TypeDefinitionIndex = 7583;

	class RoadPuzzleLeverStateChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Boolean IsLeverUp; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLELEVERSTATECHANGEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

