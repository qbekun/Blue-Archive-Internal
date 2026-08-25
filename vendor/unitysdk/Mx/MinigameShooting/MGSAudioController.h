#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::Data::Excel { class MiniGameAudioAnimatorExcel; }

#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEANIMATORVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1464AB0)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEANIMATORAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x1464B70)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_ISPLAYERCHARACTER_OFFSET UNITYSDK_OFFSET(0x1464C30)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEAUDIOPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1464CB0)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER__INITIALIZE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1464D60)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEVOICEPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1464DD0)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464E90)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_RELEASEADDRESSABLE_OFFSET UNITYSDK_OFFSET(0x1464EA0)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_ONPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1465010)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1465060)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1465070)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1465370)
#define MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER__INITIALIZE_B__5_1_OFFSET UNITYSDK_OFFSET(0x1465380)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MGSAudioController_TypeDefinitionIndex = 15097;

	class MGSAudioController : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x78

		::System::Collections::IEnumerator* CreateAnimatorVoiceTable(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEANIMATORVOICETABLE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CreateAnimatorAudioTable(::System::String* str, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEANIMATORAUDIOTABLE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsPlayerCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_ISPLAYERCHARACTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateAudioPlayInfos(::MX::Data::Excel::MiniGameAudioAnimatorExcel* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::MiniGameAudioAnimatorExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEAUDIOPLAYINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Initialize_b__5_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER__INITIALIZE_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateVoicePlayInfos(::MX::Data::Excel::MiniGameAudioAnimatorExcel* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::MiniGameAudioAnimatorExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_CREATEVOICEPLAYINFOS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseAddressable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_RELEASEADDRESSABLE_OFFSET))(nullptr);
		}

		::System::Void OnPlayAnimation(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_ONPLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__5_1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSAUDIOCONTROLLER__INITIALIZE_B__5_1_OFFSET))(arg, nullptr);
		}

	};
}

