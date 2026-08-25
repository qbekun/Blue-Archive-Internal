#pragma once
#include "../../unitysdk.h"

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GETBUFFERVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GET_SIGMA_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GET_KERNELSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_SETBUFFERVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GENERATEKERNEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_FILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_COMPUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_SET_SIGMA_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GET_BUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1d`1_TypeDefinitionIndex = 34406;

	class GaussianWindow1d`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mData; // 0x0
		::Il2CppArray<::System::Object*>* mKernel; // 0x0
		::System::Int32 mCurrentPos; // 0x0
		::System::Single _Sigma_k__BackingField; // 0x0

		Il2CppObject* GetBufferValue(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GETBUFFERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Sigma()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GET_SIGMA_OFFSET))(nullptr);
		}

		::System::Int32 get_KernelSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GET_KERNELSIZE_OFFSET))(nullptr);
		}

		::System::Void SetBufferValue(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_SETBUFFERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateKernel(::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GENERATEKERNEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_RESET_OFFSET))(nullptr);
		}

		::System::Void AddValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_ADDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Filter(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_FILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_ISEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* Compute(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_COMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Sigma(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_SET_SIGMA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BufferLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_GET_BUFFERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* Value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D`1_VALUE_OFFSET))(nullptr);
		}

	};
}

