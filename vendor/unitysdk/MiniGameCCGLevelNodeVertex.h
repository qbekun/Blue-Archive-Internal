#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MinigameCCGLevelNodeExcel; }

#define MINIGAMECCGLEVELNODEVERTEX_GET_NEXTS_OFFSET UNITYSDK_OFFSET(0x18F8930)
#define MINIGAMECCGLEVELNODEVERTEX_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x18F8940)
#define MINIGAMECCGLEVELNODEVERTEX_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x18F8950)
#define MINIGAMECCGLEVELNODEVERTEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F43B0)

	inline static constexpr unsigned int MiniGameCCGLevelNodeVertex_TypeDefinitionIndex = 16178;

	class MiniGameCCGLevelNodeVertex : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameCCGLevelNodeExcel* _Excel_k__BackingField; // 0x10
		Il2CppObject* _Nexts_k__BackingField; // 0x20
		Il2CppObject* _Previous_k__BackingField; // 0x28

		Il2CppObject* get_Nexts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGLEVELNODEVERTEX_GET_NEXTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Previous()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGLEVELNODEVERTEX_GET_PREVIOUS_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelNodeExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelNodeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGLEVELNODEVERTEX_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameCCGLevelNodeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGLevelNodeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGLEVELNODEVERTEX_.CTOR_OFFSET))(arg, nullptr);
		}

	};

