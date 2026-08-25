#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPGameInfoView; }
namespace NPA::Editor::Plate { class GameRatingInfo; }

#define NPA_EDITOR_PLATE_NXPGAMEINFODIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBF480)
#define NPA_EDITOR_PLATE_NXPGAMEINFODIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DBF6B0)
#define NPA_EDITOR_PLATE_NXPGAMEINFODIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DBF790)
#define NPA_EDITOR_PLATE_NXPGAMEINFODIALOG__SETCALLBACK_B__4_0_OFFSET UNITYSDK_OFFSET(0x9DBF810)
#define NPA_EDITOR_PLATE_NXPGAMEINFODIALOG__SETCALLBACK_B__4_1_OFFSET UNITYSDK_OFFSET(0x9DBF850)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPGameInfoDialog_TypeDefinitionIndex = 26432;

	class NXPGameInfoDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPGameInfoView* gameInfoView; // 0x30
		::System::Action* backPressCallback; // 0x38
		Il2CppObject* closeCallback; // 0x40

		::System::Void .ctor(::System::String* str, ::NPA::Editor::Plate::GameRatingInfo* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Plate::GameRatingInfo*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPGAMEINFODIALOG_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPGAMEINFODIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPGAMEINFODIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPGAMEINFODIALOG__SETCALLBACK_B__4_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPGAMEINFODIALOG__SETCALLBACK_B__4_1_OFFSET))(nullptr);
		}

	};
}

