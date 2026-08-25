#pragma once
#include "unitysdk.h"

#define LAYERCOLLISIONMATRIX_ALLOWLAYERCOLLISION_OFFSET UNITYSDK_OFFSET(0x1FB2480)
#define LAYERCOLLISIONMATRIX_IGNORELAYERCOLLISION_OFFSET UNITYSDK_OFFSET(0x1FB25D0)
#define LAYERCOLLISIONMATRIX_IGNORELAYERCOLLISION_OFFSET UNITYSDK_OFFSET(0x1FB24D0)
#define LAYERCOLLISIONMATRIX_REVERTALL_OFFSET UNITYSDK_OFFSET(0x1FB2620)
#define LAYERCOLLISIONMATRIX_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2800)

	inline static constexpr unsigned int LayerCollisionMatrix_TypeDefinitionIndex = 2904;

	class LayerCollisionMatrix : public Il2CppObject
	{
	public:
		Il2CppObject* backup; // 0x10

		::System::Void AllowLayerCollision(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERCOLLISIONMATRIX_ALLOWLAYERCOLLISION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IgnoreLayerCollision(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERCOLLISIONMATRIX_IGNORELAYERCOLLISION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IgnoreLayerCollision(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LAYERCOLLISIONMATRIX_IGNORELAYERCOLLISION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RevertAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERCOLLISIONMATRIX_REVERTALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERCOLLISIONMATRIX_.CTOR_OFFSET))(nullptr);
		}

	};

