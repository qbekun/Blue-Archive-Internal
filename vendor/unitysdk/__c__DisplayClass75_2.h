#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEchelonDB; }
class <>c__DisplayClass75_0;
namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }

#define <>C__DISPLAYCLASS75_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB340)
#define <>C__DISPLAYCLASS75_2__ENTERCONQUESTBATTLE_B__17_OFFSET UNITYSDK_OFFSET(0x1ADBC10)

	inline static constexpr unsigned int <>c__DisplayClass75_2_TypeDefinitionIndex = 1446;

	class <>c__DisplayClass75_2 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestEchelonDB* conquestEchelonDB; // 0x10
		<>c__DisplayClass75_0* CS$__8__locals2; // 0x18
		Il2CppObject* __9__17; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS75_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _EnterConquestBattle_b__17(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS75_2__ENTERCONQUESTBATTLE_B__17_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

