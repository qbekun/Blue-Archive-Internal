#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultCharacterExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2F510)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GETROOTASDEFAULTCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0xD2F520)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GETROOTASDEFAULTCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0xD2F580)
#define FLATDATA_DEFAULTCHARACTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD2F5E0)
#define FLATDATA_DEFAULTCHARACTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2F230)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xD2F600)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xD2F650)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORITECHARACTER_OFFSET UNITYSDK_OFFSET(0xD2F6D0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORITECHARACTER_OFFSET UNITYSDK_OFFSET(0xD2F720)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD2F770)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD2F7C0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXP_OFFSET UNITYSDK_OFFSET(0xD2F840)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXP_OFFSET UNITYSDK_OFFSET(0xD2F890)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0xD2F910)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0xD2F960)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0xD2F9E0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0xD2FA30)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xD2FAB0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xD2FB00)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FB80)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FBD0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FC50)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FCA0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FD20)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FD70)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_COMMONSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FDF0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_COMMONSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FE40)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FEC0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FF10)
#define FLATDATA_DEFAULTCHARACTEREXCEL_CREATEDEFAULTCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0xD2FF90)
#define FLATDATA_DEFAULTCHARACTEREXCEL_STARTDEFAULTCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0xD30440)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0xD301B0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDFAVORITECHARACTER_OFFSET UNITYSDK_OFFSET(0xD303C0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0xD30390)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDEXP_OFFSET UNITYSDK_OFFSET(0xD30360)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDFAVOREXP_OFFSET UNITYSDK_OFFSET(0xD30330)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDFAVORRANK_OFFSET UNITYSDK_OFFSET(0xD30300)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDSTARGRADE_OFFSET UNITYSDK_OFFSET(0xD302D0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDEXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD302A0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD30270)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDEXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD30240)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDCOMMONSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD30210)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ADDLEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xD301E0)
#define FLATDATA_DEFAULTCHARACTEREXCEL_ENDDEFAULTCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0xD303F0)

namespace FlatData
{
	inline static constexpr unsigned int DefaultCharacterExcel_TypeDefinitionIndex = 9243;

	class DefaultCharacterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultCharacterExcel* GetRootAsDefaultCharacterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GETROOTASDEFAULTCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultCharacterExcel* GetRootAsDefaultCharacterExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultCharacterExcel* arg2)
		{
			return ((::FlatData::DefaultCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GETROOTASDEFAULTCHARACTEREXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultCharacterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultCharacterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_characterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean get_favoriteCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORITECHARACTER_OFFSET))(nullptr);
		}

		::System::Boolean get_FavoriteCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORITECHARACTER_OFFSET))(nullptr);
		}

		::System::Int32 get_level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_exp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int32 get_Exp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int32 get_favorExp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorExp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Int32 get_favorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Int32 get_starGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_exSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_ExSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_passiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_PASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_PassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_PASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_extraPassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXTRAPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraPassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_EXTRAPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_commonSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_COMMONSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_CommonSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_COMMONSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_leaderSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEADERSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_LeaderSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_GET_LEADERSKILLLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Int32 arg7, ::System::Int32 arg8, ::System::Int32 arg9, ::System::Int32 arg10, ::System::Int32 arg11, ::System::Int32 arg12, ::System::Int32 arg13)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_CREATEDEFAULTCHARACTEREXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void StartDefaultCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_STARTDEFAULTCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDCHARACTERID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFavoriteCharacter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDFAVORITECHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFavorExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDFAVOREXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFavorRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDFAVORRANK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStarGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDSTARGRADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDEXSKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDPASSIVESKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExtraPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDEXTRAPASSIVESKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCommonSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDCOMMONSKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLeaderSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ADDLEADERSKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTCHARACTEREXCEL_ENDDEFAULTCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

	};
}

