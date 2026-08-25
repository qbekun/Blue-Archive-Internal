#pragma once
#include "unitysdk.h"

class DiceRaceCatmullRomPoint;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }

#define DICERACECATMULLROM_UPDATE_OFFSET UNITYSDK_OFFSET(0x23D2A90)
#define DICERACECATMULLROM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x23D2FA0)
#define DICERACECATMULLROM_CALCULATEPOSITION_OFFSET UNITYSDK_OFFSET(0x23D30A0)
#define DICERACECATMULLROM_DRAWSPLINE_OFFSET UNITYSDK_OFFSET(0x23D31A0)
#define DICERACECATMULLROM_DRAWSPLINEGIZMOS_OFFSET UNITYSDK_OFFSET(0x23D33B0)
#define DICERACECATMULLROM_DRAWNORMALS_OFFSET UNITYSDK_OFFSET(0x23D35D0)
#define DICERACECATMULLROM_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D35E0)
#define DICERACECATMULLROM_GETSPLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x23D36F0)
#define DICERACECATMULLROM_GENERATESPLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x23D2B80)
#define DICERACECATMULLROM_CALCULATETANGENT_OFFSET UNITYSDK_OFFSET(0x23D3760)
#define DICERACECATMULLROM_VALIDATEPOINTS_OFFSET UNITYSDK_OFFSET(0x23D33A0)
#define DICERACECATMULLROM_DRAWTANGENTS_OFFSET UNITYSDK_OFFSET(0x23D3920)
#define DICERACECATMULLROM_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x23D3700)
#define DICERACECATMULLROM_NORMALFROMTANGENT_OFFSET UNITYSDK_OFFSET(0x23D3930)

	inline static constexpr unsigned int DiceRaceCatmullRom_TypeDefinitionIndex = 5314;

	class DiceRaceCatmullRom : public Il2CppObject
	{
	public:
		::System::Int32 resolution; // 0x10
		::Il2CppArray<::System::Object*>* splinePoints; // 0x18
		::Il2CppArray<::System::Object*>* destinationPoints; // 0x20

		::System::Void Update(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_UPDATE_OFFSET))(arg, nullptr);
		}

		DiceRaceCatmullRomPoint* Evaluate(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5)
		{
			return ((DiceRaceCatmullRomPoint*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_EVALUATE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::UnityEngine::Vector3* CalculatePosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_CALCULATEPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void DrawSpline(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_DRAWSPLINE_OFFSET))(arg, nullptr);
		}

		::System::Void DrawSplineGizmos(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_DRAWSPLINEGIZMOS_OFFSET))(arg, nullptr);
		}

		::System::Void DrawNormals(::System::Single arg, ::UnityEngine::Color* arg2)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_DRAWNORMALS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSplinePoints()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_GETSPLINEPOINTS_OFFSET))(nullptr);
		}

		::System::Void GenerateSplinePoints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_GENERATESPLINEPOINTS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* CalculateTangent(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_CALCULATETANGENT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean ValidatePoints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_VALIDATEPOINTS_OFFSET))(nullptr);
		}

		::System::Void DrawTangents(::System::Single arg, ::UnityEngine::Color* arg2)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_DRAWTANGENTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_INITIALIZEPROPERTIES_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* NormalFromTangent(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROM_NORMALFROMTANGENT_OFFSET))(arg, nullptr);
		}

	};

