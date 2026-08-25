#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogEntity; }
namespace MX::MinigameCCG { class CCGLogAmountInfo; }

#define MX_MINIGAMECCG_LOGDATA_GET_LOG_OFFSET UNITYSDK_OFFSET(0x1DC54B0)
#define MX_MINIGAMECCG_LOGDATA_SET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x1DC54C0)
#define MX_MINIGAMECCG_LOGDATA_SET_AMOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1DC54D0)
#define MX_MINIGAMECCG_LOGDATA_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x1DC54E0)
#define MX_MINIGAMECCG_LOGDATA_GET_AMOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1DC54F0)
#define MX_MINIGAMECCG_LOGDATA_SET_LOG_OFFSET UNITYSDK_OFFSET(0x1DC5500)
#define MX_MINIGAMECCG_LOGDATA_SET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x1DC5510)
#define MX_MINIGAMECCG_LOGDATA_SET_TARGETENTITIES_OFFSET UNITYSDK_OFFSET(0x1DC5520)
#define MX_MINIGAMECCG_LOGDATA_GET_TARGETENTITIES_OFFSET UNITYSDK_OFFSET(0x1DC5530)
#define MX_MINIGAMECCG_LOGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5540)
#define MX_MINIGAMECCG_LOGDATA_SET_TURNPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DC5550)
#define MX_MINIGAMECCG_LOGDATA_GET_TURNPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DC5560)
#define MX_MINIGAMECCG_LOGDATA_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x1DC5570)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int LogData_TypeDefinitionIndex = 20485;

	class LogData : public Il2CppObject
	{
	public:
		::System::Int32 _TurnPlayerId_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGLogEntity* _SourceEntity_k__BackingField; // 0x18
		Il2CppObject* _TargetEntities_k__BackingField; // 0x20
		::MX::MinigameCCG::CCGLogAmountInfo* _AmountInfo_k__BackingField; // 0x28
		::System::String* _Log_k__BackingField; // 0x30
		::System::Int32 _Subject_k__BackingField; // 0x38

		::System::String* get_Log()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_GET_LOG_OFFSET))(nullptr);
		}

		::System::Void set_Subject(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_SET_SUBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_AmountInfo(::MX::MinigameCCG::CCGLogAmountInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogAmountInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_SET_AMOUNTINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Subject()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_GET_SUBJECT_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGLogAmountInfo* get_AmountInfo()
		{
			return (return (::MX::MinigameCCG::CCGLogAmountInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_GET_AMOUNTINFO_OFFSET))(nullptr);
		}

		::System::Void set_Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_SET_LOG_OFFSET))(str, nullptr);
		}

		::System::Void set_SourceEntity(::MX::MinigameCCG::CCGLogEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_SET_SOURCEENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetEntities(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_SET_TARGETENTITIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetEntities()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_GET_TARGETENTITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TurnPlayerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_SET_TURNPLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TurnPlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_GET_TURNPLAYERID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGLogEntity* get_SourceEntity()
		{
			return (return (::MX::MinigameCCG::CCGLogEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_LOGDATA_GET_SOURCEENTITY_OFFSET))(nullptr);
		}

	};
}

