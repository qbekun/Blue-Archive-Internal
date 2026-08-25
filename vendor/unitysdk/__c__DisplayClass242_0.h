#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Livestream { class NXPLivestreamSdkTargetEvent; }

#define <>C__DISPLAYCLASS242_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFB310)
#define <>C__DISPLAYCLASS242_0__LIVESTREAMREGISTERSDKTARGETEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x9CFB320)

	inline static constexpr unsigned int <>c__DisplayClass242_0_TypeDefinitionIndex = 25827;

	class <>c__DisplayClass242_0 : public Il2CppObject
	{
	public:
		Il2CppObject* listener; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS242_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LivestreamRegisterSdkTargetEvent_b__0(::NPA::Editor::Livestream::NXPLivestreamSdkTargetEvent* arg)
		{
			((::System::Void(*)(::NPA::Editor::Livestream::NXPLivestreamSdkTargetEvent*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS242_0__LIVESTREAMREGISTERSDKTARGETEVENT_B__0_OFFSET))(arg, nullptr);
		}

	};

