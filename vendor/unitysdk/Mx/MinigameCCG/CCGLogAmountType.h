#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogAmountType; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGLogAmountType_TypeDefinitionIndex = 20481;

	class CCGLogAmountType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::CCGLogAmountType* None; // 0x0
		::MX::MinigameCCG::CCGLogAmountType* Heal; // 0x0
		::MX::MinigameCCG::CCGLogAmountType* Damage; // 0x0
		::MX::MinigameCCG::CCGLogAmountType* Shield; // 0x0

	};
}

