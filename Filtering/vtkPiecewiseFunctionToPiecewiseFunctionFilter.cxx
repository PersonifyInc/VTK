/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkPiecewiseFunctionToPiecewiseFunctionFilter.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkPiecewiseFunctionToPiecewiseFunctionFilter.h"

#include "vtkPiecewiseFunction.h"

vtkCxxRevisionMacro(vtkPiecewiseFunctionToPiecewiseFunctionFilter, "1.4");

//----------------------------------------------------------------------------
vtkPiecewiseFunctionToPiecewiseFunctionFilter::vtkPiecewiseFunctionToPiecewiseFunctionFilter() 
{
  this->NumberOfRequiredInputs = 1;
  this->SetNumberOfInputPorts(1);
  this->vtkProcessObject::SetNumberOfInputs(1);
}
//----------------------------------------------------------------------------
// Specify the input data or filter.
void vtkPiecewiseFunctionToPiecewiseFunctionFilter::SetInput(vtkPiecewiseFunction *input)
{
  this->vtkProcessObject::SetNthInput(0, input);
}

//----------------------------------------------------------------------------
// Specify the input data or filter.
vtkPiecewiseFunction *vtkPiecewiseFunctionToPiecewiseFunctionFilter::GetInput()
{
  if (this->NumberOfInputs < 1)
    {
    return NULL;
    }
  
  return (vtkPiecewiseFunction *)(this->Inputs[0]);
}

//----------------------------------------------------------------------------
void vtkPiecewiseFunctionToPiecewiseFunctionFilter::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);
}
