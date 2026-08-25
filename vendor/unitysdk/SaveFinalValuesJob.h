#pragma once
#include "unitysdk.h"

namespace Unity::Mathematics { class float3; }

#define SAVEFINALVALUESJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA2AC10)
#define SAVEFINALVALUESJOB_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0xA2B1C0)
#define SAVEFINALVALUESJOB_SAVEPREVVALUES_OFFSET UNITYSDK_OFFSET(0xA2B050)

	inline static constexpr unsigned int SaveFinalValuesJob_TypeDefinitionIndex = 37970;

	class SaveFinalValuesJob : public Il2CppObject
	{
	public:
		::System::Int32 LastIndex; // 0x10
		::System::Single FrameDT; // 0x14
		::System::Single HalfDT; // 0x18
		::System::Boolean ConstrainHeight; // 0x1C
		::System::Single MinHeight; // 0x20
		Il2CppObject* BoneLengths; // 0x28
		Il2CppObject* LengthRatios; // 0x38
		::Unity::Mathematics::float3* AnchorDeltaDir; // 0x48
		::Unity::Mathematics::float3* AnchorDeltaHalfPos; // 0x54
		Il2CppObject* StepPosArr; // 0x60
		Il2CppObject* PrevPosArr; // 0x70
		Il2CppObject* PrevVelArr; // 0x80
		Il2CppObject* PrevAccArr; // 0x90
		Il2CppObject* LookRotArr; // 0xA0

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SAVEFINALVALUESJOB_EXECUTE_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* ProjectOnPlane(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEFINALVALUESJOB_PROJECTONPLANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SavePrevValues(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SAVEFINALVALUESJOB_SAVEPREVVALUES_OFFSET))(arg, nullptr);
		}

	};

