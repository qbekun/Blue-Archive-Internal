#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterVictoryInteractionExcel; }
namespace FlatData { class VoiceEvent; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A417D0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETROOTASCHARACTERVICTORYINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A417E0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETROOTASCHARACTERVICTORYINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A41840)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A418D0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A418A0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_INTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A418F0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID01_OFFSET UNITYSDK_OFFSET(0x1A41940)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX01_OFFSET UNITYSDK_OFFSET(0x1A41990)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH01_OFFSET UNITYSDK_OFFSET(0x1A419E0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH01BYTES_OFFSET UNITYSDK_OFFSET(0x1A41A20)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH01_OFFSET UNITYSDK_OFFSET(0x1A41A40)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH01BYTES_OFFSET UNITYSDK_OFFSET(0x1A41A80)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT01_OFFSET UNITYSDK_OFFSET(0x1A41AA0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID02_OFFSET UNITYSDK_OFFSET(0x1A41AF0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX02_OFFSET UNITYSDK_OFFSET(0x1A41B40)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH02_OFFSET UNITYSDK_OFFSET(0x1A41B90)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH02BYTES_OFFSET UNITYSDK_OFFSET(0x1A41BD0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH02_OFFSET UNITYSDK_OFFSET(0x1A41BF0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH02BYTES_OFFSET UNITYSDK_OFFSET(0x1A41C30)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT02_OFFSET UNITYSDK_OFFSET(0x1A41C50)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID03_OFFSET UNITYSDK_OFFSET(0x1A41CA0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX03_OFFSET UNITYSDK_OFFSET(0x1A41CF0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH03_OFFSET UNITYSDK_OFFSET(0x1A41D40)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH03BYTES_OFFSET UNITYSDK_OFFSET(0x1A41D80)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH03_OFFSET UNITYSDK_OFFSET(0x1A41DA0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH03BYTES_OFFSET UNITYSDK_OFFSET(0x1A41DE0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT03_OFFSET UNITYSDK_OFFSET(0x1A41E00)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID04_OFFSET UNITYSDK_OFFSET(0x1A41E50)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX04_OFFSET UNITYSDK_OFFSET(0x1A41EA0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH04_OFFSET UNITYSDK_OFFSET(0x1A41EF0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH04BYTES_OFFSET UNITYSDK_OFFSET(0x1A41F30)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH04_OFFSET UNITYSDK_OFFSET(0x1A41F50)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH04BYTES_OFFSET UNITYSDK_OFFSET(0x1A41F90)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT04_OFFSET UNITYSDK_OFFSET(0x1A41FB0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID05_OFFSET UNITYSDK_OFFSET(0x1A42000)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX05_OFFSET UNITYSDK_OFFSET(0x1A42050)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH05_OFFSET UNITYSDK_OFFSET(0x1A420A0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH05BYTES_OFFSET UNITYSDK_OFFSET(0x1A420E0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH05_OFFSET UNITYSDK_OFFSET(0x1A42100)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH05BYTES_OFFSET UNITYSDK_OFFSET(0x1A42140)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT05_OFFSET UNITYSDK_OFFSET(0x1A42160)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID06_OFFSET UNITYSDK_OFFSET(0x1A421B0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX06_OFFSET UNITYSDK_OFFSET(0x1A42200)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH06_OFFSET UNITYSDK_OFFSET(0x1A42250)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH06BYTES_OFFSET UNITYSDK_OFFSET(0x1A42290)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH06_OFFSET UNITYSDK_OFFSET(0x1A422B0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH06BYTES_OFFSET UNITYSDK_OFFSET(0x1A422F0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT06_OFFSET UNITYSDK_OFFSET(0x1A42310)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_CREATECHARACTERVICTORYINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A42360)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_STARTCHARACTERVICTORYINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A42EC0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A429C0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID01_OFFSET UNITYSDK_OFFSET(0x1A42990)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX01_OFFSET UNITYSDK_OFFSET(0x1A42E40)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH01_OFFSET UNITYSDK_OFFSET(0x1A42E10)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH01_OFFSET UNITYSDK_OFFSET(0x1A42DE0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT01_OFFSET UNITYSDK_OFFSET(0x1A42DB0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID02_OFFSET UNITYSDK_OFFSET(0x1A42960)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX02_OFFSET UNITYSDK_OFFSET(0x1A42D80)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH02_OFFSET UNITYSDK_OFFSET(0x1A42D50)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH02_OFFSET UNITYSDK_OFFSET(0x1A42D20)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT02_OFFSET UNITYSDK_OFFSET(0x1A42CF0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID03_OFFSET UNITYSDK_OFFSET(0x1A42930)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX03_OFFSET UNITYSDK_OFFSET(0x1A42CC0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH03_OFFSET UNITYSDK_OFFSET(0x1A42C90)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH03_OFFSET UNITYSDK_OFFSET(0x1A42C60)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT03_OFFSET UNITYSDK_OFFSET(0x1A42C30)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID04_OFFSET UNITYSDK_OFFSET(0x1A42900)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX04_OFFSET UNITYSDK_OFFSET(0x1A42C00)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH04_OFFSET UNITYSDK_OFFSET(0x1A42BD0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH04_OFFSET UNITYSDK_OFFSET(0x1A42BA0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT04_OFFSET UNITYSDK_OFFSET(0x1A42B70)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID05_OFFSET UNITYSDK_OFFSET(0x1A428D0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX05_OFFSET UNITYSDK_OFFSET(0x1A42B40)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH05_OFFSET UNITYSDK_OFFSET(0x1A42B10)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH05_OFFSET UNITYSDK_OFFSET(0x1A42AE0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT05_OFFSET UNITYSDK_OFFSET(0x1A42AB0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID06_OFFSET UNITYSDK_OFFSET(0x1A428A0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX06_OFFSET UNITYSDK_OFFSET(0x1A42A80)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH06_OFFSET UNITYSDK_OFFSET(0x1A42A50)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH06_OFFSET UNITYSDK_OFFSET(0x1A42A20)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT06_OFFSET UNITYSDK_OFFSET(0x1A429F0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ENDCHARACTERVICTORYINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A42E70)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_FINISHCHARACTERVICTORYINTERACTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A42EE0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_FINISHSIZEPREFIXEDCHARACTERVICTORYINTERACTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A42F00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVictoryInteractionExcel_TypeDefinitionIndex = 17117;

	class CharacterVictoryInteractionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterVictoryInteractionExcel* GetRootAsCharacterVictoryInteractionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterVictoryInteractionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETROOTASCHARACTERVICTORYINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterVictoryInteractionExcel* GetRootAsCharacterVictoryInteractionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterVictoryInteractionExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterVictoryInteractionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterVictoryInteractionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETROOTASCHARACTERVICTORYINTERACTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterVictoryInteractionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterVictoryInteractionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_InteractionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_INTERACTIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId01()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID01_OFFSET))(nullptr);
		}

		::System::Int32 get_PositionIndex01()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX01_OFFSET))(nullptr);
		}

		::System::String* get_VictoryStartAnimationPath01()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH01_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryStartAnimationPath01Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH01BYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryEndAnimationPath01()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH01_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryEndAnimationPath01Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH01BYTES_OFFSET))(nullptr);
		}

		::FlatData::VoiceEvent* get_VoiceEvent01()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT01_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId02()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID02_OFFSET))(nullptr);
		}

		::System::Int32 get_PositionIndex02()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX02_OFFSET))(nullptr);
		}

		::System::String* get_VictoryStartAnimationPath02()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH02_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryStartAnimationPath02Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH02BYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryEndAnimationPath02()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH02_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryEndAnimationPath02Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH02BYTES_OFFSET))(nullptr);
		}

		::FlatData::VoiceEvent* get_VoiceEvent02()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT02_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId03()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID03_OFFSET))(nullptr);
		}

		::System::Int32 get_PositionIndex03()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX03_OFFSET))(nullptr);
		}

		::System::String* get_VictoryStartAnimationPath03()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH03_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryStartAnimationPath03Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH03BYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryEndAnimationPath03()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH03_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryEndAnimationPath03Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH03BYTES_OFFSET))(nullptr);
		}

		::FlatData::VoiceEvent* get_VoiceEvent03()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT03_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId04()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID04_OFFSET))(nullptr);
		}

		::System::Int32 get_PositionIndex04()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX04_OFFSET))(nullptr);
		}

		::System::String* get_VictoryStartAnimationPath04()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH04_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryStartAnimationPath04Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH04BYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryEndAnimationPath04()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH04_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryEndAnimationPath04Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH04BYTES_OFFSET))(nullptr);
		}

		::FlatData::VoiceEvent* get_VoiceEvent04()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT04_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId05()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID05_OFFSET))(nullptr);
		}

		::System::Int32 get_PositionIndex05()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX05_OFFSET))(nullptr);
		}

		::System::String* get_VictoryStartAnimationPath05()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH05_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryStartAnimationPath05Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH05BYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryEndAnimationPath05()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH05_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryEndAnimationPath05Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH05BYTES_OFFSET))(nullptr);
		}

		::FlatData::VoiceEvent* get_VoiceEvent05()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT05_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId06()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_COSTUMEID06_OFFSET))(nullptr);
		}

		::System::Int32 get_PositionIndex06()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_POSITIONINDEX06_OFFSET))(nullptr);
		}

		::System::String* get_VictoryStartAnimationPath06()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYSTARTANIMATIONPATH06_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryStartAnimationPath06Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYSTARTANIMATIONPATH06BYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryEndAnimationPath06()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VICTORYENDANIMATIONPATH06_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryEndAnimationPath06Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GETVICTORYENDANIMATIONPATH06BYTES_OFFSET))(nullptr);
		}

		::FlatData::VoiceEvent* get_VoiceEvent06()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_GET_VOICEEVENT06_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterVictoryInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::VoiceEvent* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::VoiceEvent* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::VoiceEvent* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::VoiceEvent* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::VoiceEvent* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::VoiceEvent* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::VoiceEvent*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::VoiceEvent*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::VoiceEvent*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::VoiceEvent*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::VoiceEvent*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_CREATECHARACTERVICTORYINTERACTIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterVictoryInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_STARTCHARACTERVICTORYINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDINTERACTIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeId01(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionIndex01(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryStartAnimationPath01(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryEndAnimationPath01(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceEvent01(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeId02(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionIndex02(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryStartAnimationPath02(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryEndAnimationPath02(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceEvent02(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeId03(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionIndex03(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryStartAnimationPath03(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryEndAnimationPath03(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceEvent03(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeId04(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID04_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionIndex04(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX04_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryStartAnimationPath04(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH04_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryEndAnimationPath04(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH04_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceEvent04(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT04_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeId05(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID05_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionIndex05(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX05_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryStartAnimationPath05(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH05_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryEndAnimationPath05(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH05_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceEvent05(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT05_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeId06(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDCOSTUMEID06_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionIndex06(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDPOSITIONINDEX06_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryStartAnimationPath06(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYSTARTANIMATIONPATH06_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryEndAnimationPath06(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVICTORYENDANIMATIONPATH06_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceEvent06(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ADDVOICEEVENT06_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterVictoryInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_ENDCHARACTERVICTORYINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterVictoryInteractionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_FINISHCHARACTERVICTORYINTERACTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterVictoryInteractionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCEL_FINISHSIZEPREFIXEDCHARACTERVICTORYINTERACTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

