#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class SpecialLobbyIllustExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5ACB0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETROOTASSPECIALLOBBYILLUSTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5ACC0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETROOTASSPECIALLOBBYILLUSTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5AD20)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD5AD80)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5AA20)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD5ADA0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0xD5ADF0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD5AE30)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_CHARACTERCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD5AE50)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0xD5AEA0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD5AEE0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_SLOTTEXTURENAME_OFFSET UNITYSDK_OFFSET(0xD5AF00)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETSLOTTEXTURENAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD5AF40)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_REWARDTEXTURENAME_OFFSET UNITYSDK_OFFSET(0xD5AF60)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETREWARDTEXTURENAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD5AFA0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_CREATESPECIALLOBBYILLUSTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5AFC0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_STARTSPECIALLOBBYILLUSTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5B260)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD5B120)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0xD5B1E0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDCHARACTERCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD5B0F0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0xD5B1B0)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDSLOTTEXTURENAME_OFFSET UNITYSDK_OFFSET(0xD5B180)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDREWARDTEXTURENAME_OFFSET UNITYSDK_OFFSET(0xD5B150)
#define FLATDATA_SPECIALLOBBYILLUSTEXCEL_ENDSPECIALLOBBYILLUSTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5B210)

namespace FlatData
{
	inline static constexpr unsigned int SpecialLobbyIllustExcel_TypeDefinitionIndex = 9331;

	class SpecialLobbyIllustExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::SpecialLobbyIllustExcel* GetRootAsSpecialLobbyIllustExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::SpecialLobbyIllustExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETROOTASSPECIALLOBBYILLUSTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::SpecialLobbyIllustExcel* GetRootAsSpecialLobbyIllustExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::SpecialLobbyIllustExcel* arg2)
		{
			return ((::FlatData::SpecialLobbyIllustExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::SpecialLobbyIllustExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETROOTASSPECIALLOBBYILLUSTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::SpecialLobbyIllustExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::SpecialLobbyIllustExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterCostumeUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_CHARACTERCOSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SlotTextureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_SLOTTEXTURENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSlotTextureNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETSLOTTEXTURENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RewardTextureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GET_REWARDTEXTURENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardTextureNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_GETREWARDTEXTURENAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSpecialLobbyIllustExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::System::Int64 arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::StringOffset* arg6, ::FlatBuffers::StringOffset* arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_CREATESPECIALLOBBYILLUSTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartSpecialLobbyIllustExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_STARTSPECIALLOBBYILLUSTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDDEVNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCharacterCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDCHARACTERCOSTUMEUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDPREFABNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSlotTextureName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDSLOTTEXTURENAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardTextureName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_ADDREWARDTEXTURENAME_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndSpecialLobbyIllustExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SPECIALLOBBYILLUSTEXCEL_ENDSPECIALLOBBYILLUSTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

