#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogAmountType; }

#define MX_MINIGAMECCG_CCGLOGAMOUNTINFO_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1DC4FD0)
#define MX_MINIGAMECCG_CCGLOGAMOUNTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4FE0)
#define MX_MINIGAMECCG_CCGLOGAMOUNTINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC5010)
#define MX_MINIGAMECCG_CCGLOGAMOUNTINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC5020)
#define MX_MINIGAMECCG_CCGLOGAMOUNTINFO_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1DC5030)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGLogAmountInfo_TypeDefinitionIndex = 20482;

	class CCGLogAmountInfo : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGLogAmountType* _Type_k__BackingField; // 0x10
		::System::Int32 _Amount_k__BackingField; // 0x14

		::System::Void set_Amount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGAMOUNTINFO_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGLogAmountType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogAmountType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGAMOUNTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Type(::MX::MinigameCCG::CCGLogAmountType* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogAmountType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGAMOUNTINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGLogAmountType* get_Type()
		{
			return (return (::MX::MinigameCCG::CCGLogAmountType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGAMOUNTINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Amount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGAMOUNTINFO_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

