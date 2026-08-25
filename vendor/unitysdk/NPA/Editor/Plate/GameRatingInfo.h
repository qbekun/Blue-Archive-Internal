#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_PLATE_GAMERATINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBF8D0)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int GameRatingInfo_TypeDefinitionIndex = 26433;

	class GameRatingInfo : public Il2CppObject
	{
	public:
		::System::String* gameTitle; // 0x10
		::System::String* companyName; // 0x18
		::System::String* companyNo; // 0x20
		::System::String* gameRatingType; // 0x28
		Il2CppObject* gameRatingFields; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_GAMERATINGINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

