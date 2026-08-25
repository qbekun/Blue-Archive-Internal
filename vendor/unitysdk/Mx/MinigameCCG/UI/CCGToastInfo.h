#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGToastType; }
namespace MX::MinigameCCG::UI { class CCGToastPosition; }
namespace MX::MinigameCCG::UI { class CCGToastLifetime; }
namespace MX::MinigameCCG::UI { class CCGToastInfo; }

#define MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_TOASTTYPE_OFFSET UNITYSDK_OFFSET(0x1E25E80)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_TOASTTYPE_OFFSET UNITYSDK_OFFSET(0x1E25E90)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E25EA0)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E25EB0)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1E25EC0)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1E25ED0)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1E25EE0)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1E25EF0)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E25F00)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E25F10)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_ONFINISHEDONELOOP_OFFSET UNITYSDK_OFFSET(0x1E25F20)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_ONFINISHEDONELOOP_OFFSET UNITYSDK_OFFSET(0x1E25F30)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E25F40)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E12600)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E25F50)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_COPY_OFFSET UNITYSDK_OFFSET(0x1E25F70)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25FE0)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26010)
#define MX_MINIGAMECCG_UI_CCGTOASTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E260A0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGToastInfo_TypeDefinitionIndex = 20872;

	class CCGToastInfo : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::CCGToastType* _ToastType_k__BackingField; // 0x10
		::MX::MinigameCCG::UI::CCGToastPosition* _Position_k__BackingField; // 0x14
		::MX::MinigameCCG::UI::CCGToastLifetime* _Lifetime_k__BackingField; // 0x18
		::System::String* _Message_k__BackingField; // 0x20
		::System::String* _IconPath_k__BackingField; // 0x28
		::System::Action* _OnFinishedOneLoop_k__BackingField; // 0x30

		::MX::MinigameCCG::UI::CCGToastType* get_ToastType()
		{
			return (return (::MX::MinigameCCG::UI::CCGToastType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_TOASTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ToastType(::MX::MinigameCCG::UI::CCGToastType* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_TOASTTYPE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::CCGToastPosition* get_Position()
		{
			return (return (::MX::MinigameCCG::UI::CCGToastPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::MX::MinigameCCG::UI::CCGToastPosition* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastPosition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::CCGToastLifetime* get_Lifetime()
		{
			return (return (::MX::MinigameCCG::UI::CCGToastLifetime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_LIFETIME_OFFSET))(nullptr);
		}

		::System::Void set_Lifetime(::MX::MinigameCCG::UI::CCGToastLifetime* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastLifetime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_LIFETIME_OFFSET))(arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_ICONPATH_OFFSET))(nullptr);
		}

		::System::Void set_IconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_ICONPATH_OFFSET))(str, nullptr);
		}

		::System::Action* get_OnFinishedOneLoop()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_GET_ONFINISHEDONELOOP_OFFSET))(nullptr);
		}

		::System::Void set_OnFinishedOneLoop(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_SET_ONFINISHEDONELOOP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::UI::CCGToastType* arg, ::MX::MinigameCCG::UI::CCGToastPosition* arg, ::MX::MinigameCCG::UI::CCGToastLifetime* arg, ::System::String* str, ::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastType*, ::MX::MinigameCCG::UI::CCGToastPosition*, ::MX::MinigameCCG::UI::CCGToastLifetime*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_.CTOR_OFFSET))(arg, arg, arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::UI::CCGToastPosition* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastPosition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::MX::MinigameCCG::UI::CCGToastInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_COPY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::MinigameCCG::UI::CCGToastInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::UI::CCGToastInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGTOASTINFO_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

